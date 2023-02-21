template<typename T>
std::vector<T> creatingEvenVector(std::list<T>&lst)
{
    std::vector<int> vector_with_evens;
    for (int num : lst) {
        if (num % 2 == 0) vector_with_evens.push_back(num);
    }

    std::cout << "Vector with even elements is : ";
    for (int num : vector_with_evens) {
        std::cout << num << " ";
    }

    std::cout<<"\n";
    return vector_with_evens;
}

void task4() {

    int size_of_list = 0;
    std::cout << "Enter the size of your list: ";
    std::cin >> size_of_list;
    std::list<int> list_of_digits;

    int elem = 0;

    for (int i = 0; i < size_of_list; ++i) //   filling in the list
    {
        std::cin>>elem;
        list_of_digits.push_back(elem);
    }

    creatingEvenVector(list_of_digits);
}
