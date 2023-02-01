/**
 * @file Statistics.h
 * @brief Plik nagłówkowy klasy Statistics
 * 
 * Plik zawiera definicję klasy Statistics oraz jej metod publicznych i prywatnych.
 */

#ifndef STATISTICS_H
#define STATISTICS_H

/**
 * @class Statistics
 * @brief Klasa do obliczania statystyk
 * 
 * Klasa pozwala na obliczanie średniej oraz odchylenia standardowego danych.
 */
class Statistics
{
    public:
        /**
         * @brief Konstruktor domyślny
         * 
         * Tworzy nową instancję klasy Statistics z wartością 0 przypisaną do składowej data.
         */
        Statistics();

        /**
         * @brief Konstruktor kopiujący
         * 
         * Tworzy nową instancję klasy Statistics skopiowaną z innej instancji.
         * 
         * @param other - referencja do instancji klasy Statistics, z której nastąpi skopiowanie.
         */
        Statistics(const Statistics& other);

        /**
         * @brief Destruktor
         * 
         * Usuwa instancję klasy Statistics.
         */
        ~Statistics();

        /**
         * @brief Funkcja dostępu do składowej data
         * 
         * @return Wartość składowej data.
         */
        int getData();

        /**
         * @brief Funkcja ustawiania składowej data
         * 
         * @param newData - nowa wartość składowej data.
         */
        void setData(int newData);

        /**
         * @brief Funkcja obliczania średniej
         * 
         * Oblicza średnią wartość danych.
         * 
         * @return Średnia wartość danych.
         */
        int calculateMean();

        /**
         * @brief Funkcja obliczania odchylenia standardowego
         * 
         * Oblicza odchylenie standardowe danych.
         * 
         * @return Odchylenie standardowe danych.
         */
        int calculateStandardDeviation();

    private:
        /**
         * @brief Składowa data
         * 
         * Przechowuje wartość danych.
         */
        int data;
};

#endif // STATISTICS_H