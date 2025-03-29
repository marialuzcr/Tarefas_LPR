Console.ForegroundColor = ConsoleColor.DarkRed;
        Console.Write("------------------\n");
        Console.Write("      tarefa 5    \n");
        Console.Write("----------------- \n");

double hdia;
double hSemana;
double horaMes;


Console.WriteLine("Digite sua quantidade de horas de treinamento por dia: ");

hdia = Convert.ToInt32(Console.ReadLine());
hSemana = hdia * 5;
horaMes = hSemana * 4.5;
Console.ForegroundColor = ConsoleColor.DarkBlue;
Console.WriteLine($"o treinamento teve {hSemana} horas semanais");

int mes = (int)(1000 / horaMes);
int mesResto = (int)(1000 % horaMes);

int semanas = (int)(mesResto / hSemana);
int semanaResto = (int)(mesResto % hSemana);

double dias = semanaResto / hdia;

Console.ForegroundColor = ConsoleColor.DarkBlue;
Console.WriteLine($"Faltam {dias} dias, {semanas} semanas e {mes} meses para voce alcancar 1000 horas de treinamento!");