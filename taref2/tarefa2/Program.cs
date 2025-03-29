 Console.ForegroundColor = ConsoleColor.Yellow;
Console.WriteLine("-----------");
Console.WriteLine(" tarefa 2  ");
Console.WriteLine("-----------");
Random numAleatorio = new Random();
int valorInteiro = numAleatorio.Next(1,100);
int num ;
int cont = 0;
do{
Console.WriteLine("Digite o numero");
int num2 =int.Parse(Console.ReadLine());
num=num2;
if( num<valorInteiro){
     Console.ForegroundColor = ConsoleColor.DarkBlue;
 Console.WriteLine("errou, seu numero esta baixo");
}
if (num>valorInteiro){
      Console.ForegroundColor = ConsoleColor.DarkBlue;
    Console.WriteLine("errou, seu numero esta alto");
}
cont++;
}while(valorInteiro!=num);
  Console.ForegroundColor = ConsoleColor.Blue;
Console.WriteLine($"acertou em {cont}");
