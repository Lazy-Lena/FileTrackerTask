#ifndef FILESTATE_H
#define FILESTATE_H
#include "FileSubject.h"

// Реальный класс, который реагирует на изменения состояния файла
class FileState : public FileSubject
{
public:
    // Конструктор для файла, который нужно отслеживать
    // path - путь к файлу
    FileState(const QString& path) : path_(path) {}
    // Проверка состояния файла, отправляет текущее состояние файла наблюдателям
    void checkState() const;
private:
    // Путь к файлу
    QString path_;
};

#endif // FILESTATE_H
