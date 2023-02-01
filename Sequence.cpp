#include <iostream>
#include <vector>

class Sequence {
  private:
    std::vector<int> data;
  public:
    // Konstruktor domyślny
    Sequence() {}
    // Konstruktor kopiujący
    Sequence(const Sequence &other) {
        data = other.data;
    }
    // Destruktor
    ~Sequence() {}
    // Funkcje dostępu do składowych
    int getDataAt(int index) const { return data.at(index); }
    void setDataAt(int index, int value) { data[index] = value; }
    int getDataCount() const { return data.size(); }
    // Funkcje obliczeniowe
    void addData(int value) {
        data.push_back(value);
    }
    int sum() const {
        int result = 0;
        for (int i = 0; i < data.size(); i++) {
            result += data[i];
        }
        return result;
    }
};

int main() {
    Sequence seq;
    seq.addData(1);
    seq.addData(2);
    seq.addData(3);
    std::cout << "Sum: " << seq.sum() << std::endl;
    return 0;
}
