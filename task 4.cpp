void task4() {

    int size_of_list = 0;
    std::cout << "Enter the size of your list: ";
    std::cin >> size_of_list;

    std::list <int> list_of_digits;
    int elem = 0;

    for (int i = 0; i < size_of_list; ++i) //   filling in the list
    {
        std::cin>>elem;
        list_of_digits.push_back(elem);
    }

    std::vector <int> vector_of_evens;

    for (int num : list_of_digits) {
        if (num % 2 == 0) {
            vector_of_evens.push_back(num);
        }
    }

    std::cout << "Even elements are: ";
    for (int num : vector_of_evens) {
        std::cout << num << " ";
    }

    std::cout << std::endl;
}