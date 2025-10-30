#pragma onc#pragma once

#include "Resource.hpp"

class ResourceManager
{

private:
    Resource* resource;

public:
    ResourceManager() { //kontruktor domyślny
        resource = new Resource();
    }
    ~ResourceManager() { //destruktor
        delete resource;
    }
    ResourceManager(const ResourceManager& other) : resource(new Resource(*other.resource)) {} //konstruktor kopiujący

    ResourceManager& operator=(const ResourceManager& other) // operator przypisania kopiujący 
    {
        if (this != &other) {
            delete resource;                          // zwolnienie starego zasobu
            resource = new Resource(*other.resource); // stworzenie kopii
        }
        return *this;
    }

    double get() const { 
        return resource->get();
    }





};
