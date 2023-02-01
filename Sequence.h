#ifndef SEQUENCE_H
#define SEQUENCE_H

class Sequence
{
public:
    //konstruktor domyślny
    Sequence();

    //konstruktor kopiujący
    Sequence(const Sequence& other);

    //destruktor
    ~Sequence();

    //funkcje dostępu do składowych
    int getLength();
    void setLength(int newLength);

    int getElement(int index);
    void setElement(int index, int newValue);

    //funkcje obliczeniowe
    int calculateSum();
    int calculateProduct();
    double calculateAverage();

private:
    int length;
    int* data;
};

#endif // SEQUENCE_H
