#ifndef INFC___RAM_H
#define INFC___RAM_H
class Ram{
    char mem[100 * 1024];
    int size;
public:
    Ram();
    ~Ram();
    char read(int address);
    void write(int address, char value);
};
#endif //INFC___RAM_H
