#ifndef IOBSERVER_H
#define IOBSERVER_H
#include <QtGlobal>

class IObserver
{
public:
    virtual void Update() = 0;
    virtual ~IObserver(){};
};

#endif // IOBSERVER_H
