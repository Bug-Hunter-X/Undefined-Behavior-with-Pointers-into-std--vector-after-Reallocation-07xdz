std::vector<int> vec = {1, 2, 3, 4, 5};
int* ptr = &vec[0];

// ... some code that modifies vec ...

// Accessing ptr might lead to undefined behavior.
int value = *ptr;