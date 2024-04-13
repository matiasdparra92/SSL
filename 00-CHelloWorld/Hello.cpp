#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ofstream outputFile("Output.txt");

    if (!outputFile.is_open()) {
        cerr << "Error al abrir el archivo output.txt" << endl;
        return 1;
    }

    vector<string> msg {"Hello", "world"};

    for (const string& word : msg) {
        outputFile << word << " ";
    }

    outputFile << endl;

    outputFile.close();

    cout << "Se ha escrito correctamente en el archivo output.txt" << endl;

    return 0;
}
