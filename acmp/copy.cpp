#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream in("INPUT.TXT");
    ofstream out("OUTPUT.TXT");
    
    long long N, x, y;
    in >> N >> x >> y;
    
    // Ускоряем начало работы, сделав первую копию на более быстром ксероксе
    long long fast = min(x, y);
    long long slow = max(x, y);
    
    // Минимальное время не может быть меньше времени создания первой копии
    long long left = fast;
    // Максимальное время - если делать все копии на медленном ксероксе
    long long right = slow * N;
    
    // Бинарный поиск по времени
    while (left < right) {
        long long mid = (left + right) / 2;
        
        // Сколько копий успеем сделать за время mid
        // Первую копию делаем на быстром ксероксе
        long long copies = 1 + (mid - fast) / fast + (mid - fast) / slow;
        
        if (copies >= N) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    out << left << endl;
    
    in.close();
    out.close();
    return 0;
}