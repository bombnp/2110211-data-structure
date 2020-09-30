#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<int> numbers;
  for (pair<int, int> &p : v) {
    if (p.first == 0) {
      int rhs = numbers.top();
      numbers.pop();
      int lhs = numbers.top();
      numbers.pop();
      switch(p.second) {
        case 0:
          numbers.push(lhs+rhs);
          break;
        case 1:
          numbers.push(lhs-rhs);
          break;
        case 2:
          numbers.push(lhs*rhs);
          break;
        case 3:
          numbers.push(lhs/rhs);
          break;
      }
    } else {
      numbers.push(p.second);
    }
  }
  return numbers.top();
}

#endif
