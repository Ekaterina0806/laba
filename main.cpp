#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> read_strings(const string& filename)
{
    vector<string> strings;
    // Здесь будет код для чтения строк из файла
    //
    return strings;
}

// Функция для вывода строк на экран
void print_strings(const vector<string>& strings)
{
    for (const auto& str : strings)
    {
        cout << str << endl;
    }
}

// Функция для записи строк в файл
void write_strings(const vector<string>& strings, const string& filename)
{
    // Здесь будет код для записи строк в файл
    ofstream outputFile(filename);
    if (outputFile.is_open())
        {
        for (const auto& str : strings)
            {
            outputFile << str << endl;
            }
        outputFile.close();
        }
    else {
        cout << "Ошибка открытия файла " << filename << endl;
    }
}

int main() {
    string filename = "input.txt";
    vector<string> strings = read_strings(filename);
    print_strings(strings);
    write_strings(strings, filename);
    return 0;
}
