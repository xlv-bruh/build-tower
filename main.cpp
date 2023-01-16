#include <vector>
#include <string>
using namespace std;

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
      vector<string> idk;
      string count;
      
        for(int i = 0; i < nFloors + (nFloors -1); i++){
          count.append("*");
        }
      idk.push_back(count);
      int lol1 = 0;
      int lol2 = count.size() - 1;
      for(int i = 1; i < nFloors; i++){
        count[lol1] = ' ';
        count[lol2] = ' ';
        lol1++;
        lol2--;
        idk.push_back(count);
      }
      reverse(idk.begin(), idk.end());
      return idk;
    }
};
