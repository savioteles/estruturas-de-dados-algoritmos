#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <sstream>

using namespace std;

void print(set<string> s) {
    string last = *s.rbegin();
    s.erase(std::prev(s.end()));

    for (const auto & it : s)
        cout << it << ' ';

    cout << last << endl;
}

int main(int argc, char **argv) {

    int N;

    // Faz a leitura do valor de N
    // N é um inteiro (N < 100) que indica a quantidade de casos de teste que vem a seguir
    cin >> N;
    string str;
    getline(cin, str);

    // Loop no número de casos
    for (int i = 0; i < N; i++) {
        //Faz a leitura da primeira linha com as palavras
        getline(cin, str);

        // O conjunto s irá armazenar o resultado final
        set<string> s;

        // string temp irá armazenar os pedaços da frase
        string temp;

        // stringstream é usado para quebrar a string em palavras
        stringstream f(str);

        // insere as palavras no conjunto s
        while (f >> temp)
            s.insert(temp);

        // imprime o conjunto s
        print(s);
    }
    return 0;
}