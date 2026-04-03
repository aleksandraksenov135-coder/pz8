using System;
using System.Collections.Generic;
class Program
{
    static int cubeX = 5; 
    static int cubeY = 5; 
    static int fieldSize = 10; 
    static List<(int x, int y)> trail = new List<(int x, int y)>(); 
    static void Main(string[] args)
    {
        trail.Add((cubeX, cubeY));
        Console.WriteLine("Управление: W — вверх, S — вниз, D — вправо, A — влево. Q — выход.");
        Console.WriteLine("След кубика обозначен символом *");
        DrawField();
        while (true)
        {
            Console.Write("Введите команду: ");
            char command = Console.ReadKey().KeyChar;
            Console.WriteLine();

            if (command == 'Q' || command == 'q')
                break;

            MoveCube(command);
            DrawField(); 
        }
    }

    static void MoveCube(char direction)
    {
        switch (direction)
        {
            case 'W': case 'w':
                if (cubeY > 0) cubeY--;
                break;
            case 'S': case 's':
                if (cubeY < fieldSize - 1) cubeY++;
                break;
            case 'D': case 'd':
                if (cubeX < fieldSize - 1) cubeX++;
                break;
            case 'A': case 'a':
                if (cubeX > 0) cubeX--;
                break;
            default:
                Console.WriteLine("Неизвестная команда! Используйте W, S, D, A или Q.");
                return;
        }
        trail.Add((cubeX, cubeY));
        Console.WriteLine($"Кубик переместился в позицию: X={cubeX}, Y={cubeY}");
    }

    static void DrawField()
    {
        Console.Clear();
        Console.WriteLine("Поле 10x10. Кубик обозначен символом ■, след — *");

        for (int y = 0; y < fieldSize; y++)
        {
            for (int x = 0; x < fieldSize; x++)
            {
                if (x == cubeX && y == cubeY)
                    Console.Write("■ "); 
                else if (trail.Contains((x, y)))
                    Console.Write("* "); 
                else
                    Console.Write(". "); 
            }
            Console.WriteLine();
        }
    }
}