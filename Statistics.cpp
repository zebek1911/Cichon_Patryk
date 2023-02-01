#include <iostream>

class Statistics {
  private:
    int data;
    int sum;
    int count;
  public:
    // Konstruktor domyślny
    Statistics() : data(0), sum(0), count(0) {}
    // Konstruktor kopiujący
    Statistics(const Statistics &other) {
        data = other.data;
        sum = other.sum;
        count = other.count;
    }
    // Destruktor
    ~Statistics() {}
    // Funkcje dostępu do składowych
    int getData() const { return data; }
    void setData(int value) { data = value; }
    int getSum() const { return sum; }
    int getCount() const { return count; }
    // Funkcje obliczeniowe
    void addData(int value) {
        data = value;
        sum += value;
        count++;
    }
    double average() const {
        return (count > 0) ? (double)sum / count : 0;
    }
};

int main() {
    Statistics stats;
    stats.addData(1);
    stats.addData(2);
    stats.addData(3);
    std::cout << "Average: " << stats.average() << std::endl;
    return 0;
}
