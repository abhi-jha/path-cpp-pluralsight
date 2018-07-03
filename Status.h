//
// Created by user on 4/7/18.
//

#ifndef PATH_CPP_PLURALSIGHT_STATUS_H
#define PATH_CPP_PLURALSIGHT_STATUS_H


enum Status{Pending, Approved, Cancelled};

enum class FileError{
    notfound,
    ok
};

enum class NetworkError{
    disconnected,
    ok
};



#endif //PATH_CPP_PLURALSIGHT_STATUS_H
