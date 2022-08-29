#ifndef FILESTATEOBSERVER_H
#define FILESTATEOBSERVER_H
#include "IObserver.h"
#include <QDateTime>


class FileStateObserver : public IObserver
{
public:
    void Update();
    virtual ~FileStateObserver() {}
private:
    QDateTime lastChanged_;
};


#endif // FILESTATEOBSERVER_H
