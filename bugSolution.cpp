std::vector<int> vec = {1, 2, 3, 4, 5};
for (int& val : vec) {
  // Modifying values is safe
  val *= 2;
}

// Or use iterators:
for (auto it = vec.begin(); it != vec.end(); it++) {
  *it *= 2;
}

// Accessing values is always safe
for (int val : vec) {
  std::cout << val << " ";
}
std::cout << std::endl;