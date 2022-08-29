#ifndef FILESTATE_H
#define FILESTATE_H
#include "FileSubject.h"


class FileState : public FileSubject
{
public:
    FileState(const QString& path) : path_(path) {}
    void checkState() const;
private:
    QString path_;
};

#endif // FILESTATE_H
