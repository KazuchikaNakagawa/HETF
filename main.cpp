#include <string>
#include <vector>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  vector<string> args(argc, argc + argv);
  if (args.size() == 1) {
    /* help */
    cout << "HETF(High Efficient Text Formatter)" << endl;
    cout << "    hetf -generate <file name> : creates .hetf file from your text." << endl;
    cout << "    hetf -archive <.hetf file> : display texts in commandline." << endl;
    cout << "    hetf -txt <.hetf> : unzip .hetf file and generates .txt file." << endl;
  }
  if (args[1] == "-generate") {
    /* gen */
    string path;
    if (args.size() < 3) {
      cout << "enter path:";
      cin >> path;
    }else{
      path = args[2];
    }
    // 作った関数に引き渡します。ファイルの存在確認は関数に任せます。
    cout << ":)" << endl;
  }
  else if (args[1] == "-archive"){
    string path;
    if (args.size() < 3) {
      cout << "enter path:";
      cin >> path;
    }else{
      path = args[2];
    }
    // 作った関数に引き渡します。ファイルの存在確認は関数に任せます。
    cout << ":)" << endl;
  }
  else if (args[1] == "-txt"){
    string path;
    if (args.size() < 3) {
      cout << "enter path:";
      cin >> path;
    }else{
      path = args[2];
    }
    // 作った関数に引き渡します。ファイルの存在確認は関数に任せます。
    cout << ":)" << endl;
  }
  return 0;
}
