import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Task_A16
{
    //    A16. Дано число не большее 1000000. Добавьте в начало и в конечн этого числа цифру 3.
//    Пример входных данных:  123
//    Пример выходных данных: 31233
    public static void main(String[] args) throws Exception
    {
        // создаем объект принимающий ввод с клавиатуры
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String sNum = reader.readLine(); //принимаем с клавиатуры число, которое хранится как строка
        int num = Integer.parseInt(sNum); //парсим строковое число в целое число

        // делаем проверку чтоб число было не более 999 999 и не меньше нуля
        while (num < 0 && num > 999999){
            System.out.println("Введите число еще раз");
            sNum = reader.readLine();
            num = Integer.parseInt(sNum);
        }
        // сначала справа "приклем" тройку
        // алгорит простой, num умножаем на 10 и прибавляем 3
        num = num * 10 + 3;

        // создаем массив, в котором будем хранить символы этог числа
        int arr[] = new int[8];
        // поскольку максимальное число 6-ти значное, то чтоб хранить еще два символа
        // справа и слевва нужно "восьмиместный" массив

        // инициализируем счетчик для цикла
        int c = 0;
        // теперь разбиваем введенное числло на символы и забиваем массив
        while (num != 0)
        {
            arr[c] = num % 10;
            num = num / 10;
            c++;
        }
        // теперь у нас массив заполнен, причем возможно некоторые элементы остались "нулями"
        // посокольку мы заполняли массив с "конца", то элемент предшествующий последней инициализации
        // должен быть тройкой

        arr[c++] = 3;

        // цикл выводящий элементы массива на экран
        for (int i = c - 1; i >= 0; i--)
            System.out.println(arr[i]);

    }
}
