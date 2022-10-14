# Условни конструкции

### if - else
```c++
if (<condition>)  
{  
	// изпълнява се, ако условието е истина.  
}  
else // незадължително  
{
	// изпълнява се, ако условието е лъжа.  
}  
```

### if - else if - else
```c++
if (<condition1>)  
{  
	// изпълнява се, ако <condition1> е истина.   
}  
else if (<condition2>)  
{  
	// изпълнява се, ако <condition1> е лъжа и <condition2> е истина.  
}  
.
.
.
else if (<conditionK>)  
{  
	// изпълнява се, ако <condition1>..<conditionK-1> са лъжа и <conditionК> е истина.  
}  
else // незадължително  
{  
	// изпълнява се, ако всички горни условия са лъжа.  
}  
```

---

## ЗАДАЧИ

***Задача 1:***  
Да се напише програма, която при подадено число, отговарящо на оценка, изписва оценката с думи.  

***Задача 2 (Време + 15 минути):***  
Да се напише програма, която при подадени час и минути от 24-часово денонощие изчислява колко ще е часът след 15 минути. Резултатът да се отпечата във формат hh:mm. Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. Часовете и минутите се изписват винаги с по две цифри и с водеща нула, когато числото е едноцифрено.  

***Задача 3 (Лице на фигура):***  
Въвеждат се размерите на геометрична фигура. Да се напише програма, която пресмята лицето й.  
Фигурите са четири вида: **квадрат (s), правоъгълник (r), кръг (c) и триъгълник (t).**   
На първия ред на входа се чете вида на фигурата (square, rectangle, circle или triangle).  
- Ако фигурата е квадрат, на следващия ред се чете едно число – *дължина на страната му.*   
- Ако фигурата е правоъгълник, на следващите два реда се четат две числа – *дължините на страните му.*  
- Ако фигурата е кръг, на следващия ред се чете едно число – *радиусът на кръга.*  
- Ако фигурата е триъгълник, на следващите два реда се четат две числа – *дължината на страната му и дължината на височината към нея.*  

***Задача 4 (Редица трион):***  
Ще казваме, че редица от числа е трион, ако всяко число в нея е едновременно или по-голямо или равно от двата си съседа, или по-малко или равно от тях. За първия и последния елемент имаме само по един съсед. Да се напише програма, която при подадени 5 на брой цели числа извежда на стандартния изход "yes", ако въведената редица е трион и "no", ако не е.  

***Задача 5:***  
Да се напише програма, която при подадени радиус r и двумерна точка (х, у) проверява дали точката се намира вътре/извън или по контура на окръжност с център (0,0).  