#include <string>

using namespace std;

string problemSolution3(float height, char S) {

    string result;

    if(S == 'M') {

        if(height < 1.70) {

            result = "Short";

        } else if(height > 1.70 and height < 1.85) {

            result = "Normal";

        } else if(height > 1.85) {

            result = "Tall";

        }

    } else if(S == 'F') {

        if(height < 1.60) {

            result = "Short";

        } else if(height > 1.60 and height < 1.75) {

            result = "Normal";

        } else {

            result = "Tall";

        }

    }

    return result;

    

}

