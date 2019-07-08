#ifndef REQUEST_DATABASE_H
#define REQUEST_DATABASE_H

#include "QString"
#include "QFile"
#include "request.h"
#include "wwf.h"

class request_database:public   WWF
{

private:


public:

    void Insert(request row);
    request_database();
    request extract_data(QString line);
    request Search_ID(QString ID);
    bool conflict_request(request req);
};

#endif // REQUEST_DATABASE_H
