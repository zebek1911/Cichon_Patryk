#ifndef STATISTICS_H
#define STATISTICS_H

class Statistics
{
    public:
        //konstruktor domyślny
        Statistics();

        //konstruktor kopiujący
        Statistics(const Statistics& other);

        //destruktor
        ~Statistics();

        //funkcje dostępu do składowych
        int getData();
        void setData(int newData);

        //funkcje obliczeniowe
        int calculateMean();
        int calculateStandardDeviation();

    private:
        int data;
};

#endif // STATISTICS_H
