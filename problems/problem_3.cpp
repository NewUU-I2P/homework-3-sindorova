#include <string>

std::string problemSolution3(int height, std::string S) {
  // write your code here
  std::string result;
  if (S == "M") {
    if (height < 170) {
      result = "Short";
    } else if (height >= 170 && height < 185) {
      result = "Normal";
    } else if (height >= 185) {
      result = "Tall";
    }
  } else if (S == "F") {
    if (height < 160) {
      result = "Short";
    } else if (height >= 160 && height < 175) {
      result = "Normal";
    } else {
      result = "Tall";
    }
  } else {
    result = "Invalid gender";
  }
  // use return to return your result
  return result;
  // make use of control flow statements
}
