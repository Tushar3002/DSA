#include<iostream>
#include<vector>
using namespace std;

// void singleNum() {
//     vector<int> vi = {4, 1, 2, 1, 2};

//     for(int i = 0; i < vi.size(); i++) {
//         int count = 0;
        
//         // Count how many times vi[i] appears in the array
//         for(int j = 0; j < vi.size(); j++) {
//             if(vi[i] == vi[j]) {
//                 count++;
//             }
//         }

//         // If the count is exactly 1, it's the single number
//         if(count == 1) {
//             cout << "The single number is: " << vi[i] << endl;
//             break;  // Exit the loop once the single number is found
//         }
//     }
// }

void singleNum() {
    vector<int> vi = {4, 1, 2, 1, 2};
    int result = 0;

    for (int i = 0; i < vi.size(); i++) {
        result =result ^ vi[i];
    }       

    cout << "The single number is: " << result << endl;
}
int main()
{
    singleNum();
    return 0;
}