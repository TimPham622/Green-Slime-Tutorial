#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    if (this->documents.find(id) == this->documents.end()){
        documents.insert({id, Document(name, id, license_limit)});
        docIDLookup.insert({name, id});
    }
}

void DocumentManager::addPatron(int patronID){
    if (this->patrons.find(patronID) == this->patrons.end()){
        patrons.insert(patronID);
    }
}

int DocumentManager::search(std::string name){
    if (this->docIDLookup.find(name) == this->docIDLookup.end())
        return 0;
    
    return this->docIDLookup[name];
} 

bool DocumentManager::borrowDocument(int docid, int patronID){
    if (this->documents.find(docid) == this->documents.end())
        return false;

    if ((int)this->documents[docid].licenses_used.size() + 1 > this->documents[docid].license_limit){
        return false;
    }
    
    this->documents[docid].licenses_used.insert(patronID);
    return true;

}

void DocumentManager::returnDocument(int docid, int patronID){
    if (this->documents.find(docid) == this->documents.end())
        return;

    if (this->documents[docid].licenses_used.size() == 0 || 
        this->documents[docid].licenses_used.find(patronID) == this->documents[docid].licenses_used.end()){
        return;
    }
    
    this->documents[docid].licenses_used.erase(patronID);
}