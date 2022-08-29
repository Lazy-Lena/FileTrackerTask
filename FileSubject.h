#ifndef FILESUBJECT_H
#define FILESUBJECT_H
#include "IObserver.h"
#include <QList>

class FileSubject
{
public:
    void Attach(IObserver* observer);
    void Detach(IObserver* observer);
    void Notify() const;
private:
    QList<IObserver*> observers;
};


#endif // FILESUBJECT_H
