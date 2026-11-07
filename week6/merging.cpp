#include <iostream>
#include <vector>

void merge_vectors_int(std::vector<int> &v1, const std::vector<int> &v2, std::vector<int> &merged)
{
    for (int i = 0; i < v2.size(); i++)
    {
        v1.push_back(v2[i]);
    }

    // bubble sort

    int n = v1.size();
    bool swapped;

    // Bubble Sort: Low to High
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            // If the current element is greater than the next, swap them
            if (v1[j] > v1[j + 1])
            {
                int temp = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = temp;
                swapped = true;
            }
        }

        // Optimization: if no swaps occurred in this pass, it's already sorted
        if (!swapped)
        {
            break;
        }
    }

    for (int i = 0; i < v1.size(); i++)
    {
        merged.push_back(v1[i]);
    }
}

int main()
{

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if (out == expected_output)
    { // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else
    {
        std::cout << "not passed" << std::endl;
    }
}