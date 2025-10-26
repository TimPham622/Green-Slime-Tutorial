#pragma once
#include <string>
#include <unordered_set>
#include <unordered_map>

struct Document {
    std::string name = "";
    int id = 0;
    int license_limit = -1;
    std::unordered_set<int> licenses_used;

    Document() {}
    Document(std::string name, int id, int license_limit)
        : name(name), id(id), license_limit(license_limit) {}
};

class DocumentManager {
private:
    std::unordered_set<int> patrons;
    std::unordered_map<int, Document> documents;
    std::unordered_map<std::string, int> docIDLookup;
public:
    void addDocument(std::string name, int id, int license_limit);

    void addPatron(int patronID);

    int search(std::string name);

    bool borrowDocument(int docid, int patronID);  

    void returnDocument(int docid, int patronID);
};
