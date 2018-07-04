//
// Created by user on 5/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_RESOURCE_H
#define PATH_CPP_PLURALSIGHT_RESOURCE_H

#include <string>
class Resource {
private:
    std::string name;
public:
    explicit Resource(std::string name);
    ~Resource(void);
    std::string getName() const {return name;}
};
void testHeap();
#endif //PATH_CPP_PLURALSIGHT_RESOURCE_H
