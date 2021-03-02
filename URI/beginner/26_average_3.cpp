#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double n1, n2, n3, n4, n5, av, av1;
  cin >> n1 >> n2 >> n3 >> n4;
  av = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
  cout << fixed << setprecision(1);

  if (av <= 4.9)
  {
    cout << "Media: " << av << endl
         << "Aluno reprovado." << endl;
  }
  else if (av >= 7.0)
  {
    cout << "Media: " << av << endl
         << "Aluno aprovado." << endl;
  }
  else
  {
    cout << "Media: " << av << endl;
    cout << "Aluno em exame.\n";
    cin >> n5;
    cout << "Nota do exame: " << n5 << endl;
    if ((n5 + av) / 2.0 > 5.0)
    {
      cout << "Aluno aprovado.\n";
    }
    else
    {
      cout << "Aluno reprovado.\n";
    }
    cout << "Media final: " << (n5 + av) / 2.0 << endl;
  }

  return 0;
}