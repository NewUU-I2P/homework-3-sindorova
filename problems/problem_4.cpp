#include <string>
#include <sstream>
using namespace std;
string problemSolution4(const string &macAddress) {
    string result;

    if(macAddress[0] == 'F' and macAddress[1] == 'F') {
        result = "Broadcast";
    } else if(macAddress[1] % 2 == 0) {
        result = "Unicast";
    } else {
        result = "Multicast";
    }
    return result;
}
