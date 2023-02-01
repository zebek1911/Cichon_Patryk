#ifndef SEQUENCE_H
#define SEQUENCE_H

/**
 * @class Sequence
 * @brief A class representing a mathematical sequence of integers.
 */
class Sequence
{
public:
    /**
     * @brief Default constructor
     * 
     * Constructs a new object of the class with default values.
     */
    Sequence();

    /**
     * @brief Copy constructor
     * 
     * Constructs a new object as a copy of an existing 'Sequence' object.
     * 
     * @param other A constant reference to the existing 'Sequence' object.
     */
    Sequence(const Sequence& other);

    /**
     * @brief Destructor
     * 
     * Cleans up memory when the object goes out of scope.
     */
    ~Sequence();

    /**
     * @brief Get the length of the sequence
     * 
     * @return The length of the sequence as an integer.
     */
    int getLength();

    /**
     * @brief Set the length of the sequence
     * 
     * @param newLength The new length of the sequence as an integer.
     */
    void setLength(int newLength);

    /**
     * @brief Get the element at a given index
     * 
     * @param index The index of the element to be retrieved.
     * 
     * @return The value of the element at the given index.
     */
    int getElement(int index);

    /**
     * @brief Set the element at a given index
     * 
     * @param index The index of the element to be set.
     * @param newValue The new value of the element.
     */
    void setElement(int index, int newValue);

    /**
     * @brief Calculate the sum of all elements in the sequence
     * 
     * @return The sum of all elements in the sequence as an integer.
     */
    int calculateSum();

    /**
     * @brief Calculate the product of all elements in the sequence
     * 
     * @return The product of all elements in the sequence as an integer.
     */
    int calculateProduct();

    /**
     * @brief Calculate the average of all elements in the sequence
     * 
     * @return The average of all elements in the sequence as a double.
     */
    double calculateAverage();

private:
    /**
     * @brief The length of the sequence
     */
    int length;

    /**
     * @brief A pointer to an array of integers representing the elements of the sequence
     */
    int* data;
};

#endif // SEQUENCE_H