# π§¬μ μ  μκ³ λ¦¬μ¦ μ μ© νκ·λΆμπ§¬

## κ°μ
***
<br>

* `Genetic Algorithm` μ μ μμ λͺ©μ 
* νκ· λΆμ λ° μ μ  λ°μ΄ν° μ€λͺ
* `Genetic Algorithm` μ€μ  κ΅¬ν νλ‘κ·Έλ¨ λΆμ
    * μ½λ λμ λ°©μ
    * μ½λ μ€ν κ²°κ³Ό
    * μ½λ μ±λ₯ λΆμ
* νλ‘κ·Έλ¨μ νκ³ λ° κ°μ μ 
* κ²°λ‘ 

## μ μ  μκ³ λ¦¬μ¦μ κ΄νμ¬
***

**μ μ  μκ³ λ¦¬μ¦(Genetic Algorithm)** μ λλμ²΄ λ¬΄μμ΄λ©°, μΈμ  μ¬μ©λλ μκ³ λ¦¬μ¦μΈκ°?

**μ μ:**

- μ‘΄ νλλ(John Holland)μ μν΄μ 1975λμ κ°λ°λ **μ μ­ μ΅μ ν κΈ°λ²**. 
- <mark>μλ¬Όμ²΄κ° νκ²½μ μ μνλ©΄μ μ§νν΄κ°λ λͺ¨μ΅μ λͺ¨λ°©</mark>νμ¬ **μ μ ** μκ³ λ¦¬μ¦μ΄λΌκ³  λΆλ¦°λ€.

μ μ­ μ΅μ ν vs μ§μ­ μ΅μ ν

<img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/global.jpg?raw=true" width="500" height ="300">

* **μ μ­ μ΅μ ν**λ λ€μ μκ°μ΄ κ±Έλ¦¬λλΌλ μ μ²΄ νμμμ­μμ κ°μ₯ μ’μ ν΄λ₯Ό μ°Ύλ κ²μ λͺ©νλ‘ νλ λ°©λ²μ΄λ€.

* **μ§μ­ μ΅μ ν**λ λΉκ΅μ  λ¨μκ°μ μΌλΆ νμμμ­ λ΄μμ κ°μ₯ μ’μ ν΄λ₯Ό μ°Ύλ κ²μ λͺ©νλ‘ νλ λ°©λ²μ΄λ€. 

> μ μ  μκ³ λ¦¬μ¦μ **μ μ­ μ΅μ ν** κΈ°λ²μ΄λ€.

**κ΄λ ¨ μ©μ΄:**

| κ° | μλ―Έ |
|--- |---|
| `μΌμμ²΄ (chromosome)` | νλμ ν΄ (solution)λ₯Ό νν | 
| `μ μ μ (gene)` | μΌμμ²΄ κ΅¬μ± μμ, νλμ μ μ  μ λ³΄λ₯Ό λνλΈλ€.|  
| `μμ (offspring)` | λΆλͺ¨ μΌμμ²΄λ‘λΆν° μμ±λ λ€μ μΈλ μΌμμ²΄ |  
| `μ ν©λ (fitness)` | μΌμμ²΄κ° νννλ ν΄κ° μΌλ§λ μ ν©νμ§ λνλ΄λ κ° |

**λμ λ°©μ:**

<img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/genetic.png?raw=true" width="500" height ="300">

μ§ν λ°©μμ λ€μκ³Ό κ°λ€.

1) μ΄κΈ° μΌμμ²΄ μ§ν© μμ±
2) μ΄κΈ° μΌμμ²΄λ€μ λν μ ν©λ κ³μ°
3) νμ¬ μΌμμ²΄λ€λ‘λΆν° μμλ€μ μμ±
4) μμ±λ μμλ€μ μ ν©λ κ³μ°
5) μ’λ£ μ‘°κ±΄ νλ³
- μ’λ£ μ‘°κ±΄μ΄ κ±°μ§μΈ κ²½μ°, (3)μΌλ‘ μ΄λνμ¬ λ°λ³΅
- μ’λ£ μ‘°κ±΄μ΄ μ°ΈμΈ κ²½μ°, μκ³ λ¦¬μ¦μ μ’λ£

μ¦, **μ ν©λλ₯Ό κ³μ°νκ³ , μμλ€μ λ§λλ κ³Όμ μ λ°λ³΅**μ΄λ€. μ ν©λκ° λμ κ°μ²΄λ‘λ§ ν΄λ₯Ό κ΅¬μ±ν΄ λκ°λ©΄μ, κ²°κ΅­ λ§μ μΈλκ° λ°λ³΅λλ€λ©΄ μ΅μ ν΄μ κ°κΉμ΄ ν΄λ₯Ό μ»μ΄λΌ μ μλκ²μ΄λ€. 

λ°λΌμ λλΆλΆμ κ²½μ°λ μΈλκ° μΌμ  μμ€ μ§νλκ±°λ, ν΄κ° νΉμ  λ²μμ λ€κ²λλ©΄ μκ³ λ¦¬μ¦μ μ’λ£νλ€.

μκ³ λ¦¬μ¦μ ν΅μ¬ μ°μ°μ λ€μκ³Ό κ°λ€.

* μ ν(selection)
    - ν μΈλμμ λ€μ μΈλλ‘ μ ν΄μ§λ ν΄μ νλ³΄λ€μ μ μ νλ€.
    - μ¦, μμ μΌμμ²΄λ₯Ό λ§λ€λ, μ΄λ€ λΆλͺ¨ μΌμμ²΄λ₯Ό κ°μ§κ³  λ§λ€μ§λ₯Ό μ νλ κ²
* κ΅μ°¨(crossover)
    - μ νλ ν΄λ€μ κ΅λ°°μμΌ μλ‘μ΄ μ μ μ(ν΄)λ₯Ό μ»λ κ³Όμ 
* λ³μ΄(mutation)
    - μ μ μκ° μ€μ€λ‘ λ³μ΄λ₯Ό μΌμ΄μΌ μμλ‘ λ€λ₯Έ ν΄λ‘ λ³νλ μΌ

κ° μ°μ°λ§λ€ μ¬λ¬ λ°©λ²μ΄ μμ§λ§ κ°μ₯ λνμ μΈ λ°©λ²λ€μ μ¬μ©νλ€.

μ ν μ°μ°:

<img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/roulette.png?raw=true" width="500" height ="300">

<p align="center">λ£°λ  ν  (Roulette Wheel)</p>

μμ κ·Έλ¦Όμ λ³΄μ. 

μ ν μ°μ°μ μλ κ° ν΄μ λν μ ν©λκ° μ΄λ―Έ κ³μ°λ μνμ΄λ€. κ·Έ μ ν©λλ₯Ό λͺ¨λ ν©νλ€ κ° ν΄κ° κ°μ§λ μ ν©λλ₯Ό λΉμ¨μ λ£°λ  ννλ‘ λνλΈλ€. κ·Έ ν λ€μ μΈλμ κ°μλ§νΌ λ£°λ μμ ν΄λ₯Ό λ½μλΈλ€. μ¦, **μ ν©λκ° λμμλ‘ μ νλ  νλ₯ μ΄ λμ μ ν μ°μ°**μΌλ‘, *λ£°λ  ν  (Roulette Wheel)* λ°©λ²μ΄λΌκ³  νλ€. μλ¬΄λλ μ’μ ν΄κ° λΆλͺ¨λ‘ μ νλμ΄ μμμ΄ λμ€λ©΄ μ’μνλ κ·Έ μλλ₯Ό κ°μ§ μ ν μ°μ°μ΄λ€.

κ΅μ°¨ μ°μ°:

![sixth](https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/crossover.png?raw=true)

μ ν μ°μ°μΌλ‘ μ ν΄μ§ ν΄λ₯Ό 2μ§μλ‘ λνλ΄κ³ , μ§μ§μ΄μ§ ν΄λΌλ¦¬μ λΉνΈ(bit)μ νΉμ  λΆλΆμ κ΅μ°¨νλ κ²μ΄λ€. μ΄λ κ² κ΅μ°¨ μ°μ° νμ λμ¨ ν΄λ€μ΄ μλ‘μ΄ μΈλμ ν΄κ° λλκ²μ΄λ€.

νμ§λ§ μ΄ νλ‘κ·Έλ¨μμλ 10μ§μλΌλ¦¬μ μλ¦¬λ₯Ό λ°κΎΈλ λ°©λ²μΌλ‘ κ΅¬ννλ€.

λ³μ΄ μ°μ°:

<img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/mutate.png?raw=true" width="500" height ="300">

μ§μ­ μ΅μ μ μ λΉ μ§λ λ¬Έμ λ₯Ό ν΄κ²°νκΈ° μν΄ μλ‘­κ² μμ±λ μΌμμ²΄μ νλ₯ μ μΌλ‘ λμ°λ³μ΄κ° λ°μνλλ‘ νλ€. μΌλ°μ μΌλ‘ 0.1%, 0.05% λ±μ μμ£Ό λ?μ νλ₯ λ‘ λμ°λ³μ΄κ° λ°μνλλ‘ μ€μ νλ€. 

λνμ μΌλ‘ 1) reverse μ 2) exchange μ°μ°μ΄ μλλ°(κ·Έλ¦Ό μ€λ₯), μ¬κΈ°μλ λ¨μν μ μκ°μ μλ‘μ΄ λλ€ν κ°μΌλ‘ μ€μ νλ λ°©μμ μ±ννλ€.

## νκ· λΆμ λ° μ μ  λ°μ΄ν° λΆμ
***

μ°λ¦¬λ μ΄μ  μ μ  μκ³ λ¦¬μ¦μ λν΄ μκ²λμλ€. κ·Έλ λ€λ©΄ μ΄μ  μ΄ μ΅μ ν κΈ°λ²μ μ΄μ©ν΄ κ³Όμ° μ΄λ€ λ¬Έμ λ₯Ό νμ΄λ³Όμ§ μμλ³΄μ. κ·Έκ²μ΄ λ°λ‘, **νκ· λΆμ**μ΄λ€.

**νκ· λΆμμ΄λ?**

<img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/linear_regression.png?raw=true" width="500" height ="300">

μ°λ¦¬λ λ°μ΄ν°κ° μ£Όμ΄μ§λ©΄ μ΄λ€ ννμ ν¨ν΄μ λνλΌ κ²μ΄λΌκ³  κ°μ νλ€. μλ₯Ό λ€λ©΄ μ κ·Έλ¦Όμμμ λ°μ΄ν°λ€μ xκ° μ¦κ°νλ©΄ yλ μ¦κ°νλ μ νμ μΈ λͺ¨μ΅μ λ³΄μΈλ€. μ΄λ° κ²½ν₯μ μμΌλ‘ λνλ΄λ©΄ *y = ax+b*μ ννκ° λνλ  κ²μ΄λ€.

μ΄ λ μ μν μ *y = ax+b*λ₯Ό **λͺ¨ν(model)** μ΄λΌκ³  νκ³ , λͺ¨νμ ννλ₯Ό κ²°μ μ§λ λ³μ *a, b*λ₯Ό **νλΌλ―Έν°(parameter)** λλ **λͺ¨μ(ζ―ζΈ)** λΌκ³ νλ€.

μ¦, νκ· λΆμμ νλ§λλ‘ μ μνλ©΄ μ΄λ λ€.
> λλ¦½λ³μκ° μ’μλ³μμ μ΄λ€ μν₯μ λ―ΈμΉλμ§ μκΈ° μν΄ μ€μνλ λΆμλ°©λ²

λ¬Όλ‘  μμ°μμλ κ·Έλ κ³  μΈκ° μ¬νμμλ κ·Έλ κ³  μ‘΄μ¬νλ λ°μ΄ν°λ€μ΄ ν­μ μ νμ μΈ λͺ¨μ΅λ§μ λ³΄μ΄μ§λ μμκ²μ΄λ€. νμ§λ§ μ΄λ² νλ‘μ νΈμμλ λΉκ΅μ  λΆμνκΈ° μ½κ² μ νμ μΈ νκ· λΆμλ§ μ§ννλ€. 

**μ μ μ μ± νλ¨ λ°©λ²:**

μμ μ°Ύμμ λ, κ·Έ λͺ¨νμ΄ λ°μ΄ν°μ μΌλ§λ μ λ§λμ§λ₯Ό μΈ‘μ ν  λ°©λ²μ΄ νμνλ€. μ΄ λ μ¬μ©νλ ν¨μκ° **μμ€ ν¨μ(loss function)** λΌκ³  λΆλ₯΄λ©°, λͺ¨νμ΄ λ°μ΄ν°μ μΌλ§λ μ λ§λμ§ μ λλ₯Ό λνλΈλ€.

<p align="center"><img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/mse.jpg?raw=true"></p>

1. κ°μ₯ λλ¦¬ μ°μ΄λ μμ€ ν¨μλ **νκ·  μ κ³± μ€μ°¨(*Mean Squared Error*, MSE)** μ΄λ€. μμΈ‘κ³Ό μ€μ μ μ°¨μ΄λ₯Ό μ€μ°¨(error)λΌκ³  νλ€. μ΄ μ€μ°¨λ₯Ό λͺ¨λ μ κ³±ν λ€μμ νκ·  λΈ κ²μ΄ MSEμ΄λ€.

- μ¬κΈ°μ ν κ°μ§ μλ¬Έμ΄ λ λ€. μ νν μ κ³±μ νλ κ²μΌκΉ? μμΈ‘μ λ λ² νλλ° μ€μ°¨κ° +1, -1μΈ κ²½μ°μ, μ€μ°¨κ° +5, -5μΈ κ²½μ°λ₯Ό μκ°ν΄λ³΄μ. μ κ³±μ νμ§ μκ³  μ€μ°¨μ νκ· μ κ΅¬νλ©΄ λ κ²½μ° λͺ¨λ μ€μ°¨μ νκ· μ 0μ΄ λλ€. 1-1λ 0μ΄κ³ , 5-5λ 0μ΄κΈ° λλ¬Έμ΄λ€. λ°λΌμ μ€μ°¨ μ λλ₯Ό κ³ λ €νκΈ° μν΄ μ κ³±μ νλ€. 

<p align="center"><img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/R.jpg?raw=true"></p>

2. MSEμ λ¨μ μ ν¬κ³ , μμμ μ§κ΄μ μΌλ‘ μκΈ° μ΄λ ΅λ€λλ° μλ€. μλ₯Ό λ€μ΄ MSEκ° 20μ΄λΌλ©΄, λλ 100μ΄λΌλ©΄ μ΄ λͺ¨νμ μΌλ§λ μ μ νμ§ μ μλΏμ§ μλλ€. μ΄λ₯Ό λ³΄μνλ μμΉκ° **κ²°μ  κ³μ(coefficient of determination)** μ΄λ€. 

- VARμ λΆμ°μ λ»νλ€. (λ°μ΄ν°μ νκ· μ μ°¨μ΄λ₯Ό μ κ³±ν΄μ νκ· λΈ κ²)
- R^2μ λκ° 0μμ 1κΉμ§ λ²μλ‘ λμ€κΈ° λλ¬Έμ 0%~100%λ‘ μ½κΈ°λ νλ€. 
- λ³΄ν΅ "μ΄ λͺ¨νμ λΆμ°μ ~%λ₯Ό μ€λͺνλ€"λΌλ μμΌλ‘ ν΄μνλ€. μλ₯Ό λ€μ΄ 
R^2 = 0.7μ΄λΌλ©΄ "μ΄ λͺ¨νμ λΆμ°μ 70%λ₯Ό μ€λͺνλ€"λΌκ³  ν΄μνλ€.
- λΆμ°μ λ°μ΄ν°μ κ³ μ λ κ°μ΄κΈ° λλ¬Έμ R^2μ μ€μ λ‘λ MSEλ₯Ό μ νν λ°μνλ κ°μ΄λ€. μ¦, MSEκ° μ»€μ§λ©΄ μμμ§κ³ , MSEκ° μμμ§λ©΄ μ»€μ§λ€. 

> μ¦ μ μ  μκ³ λ¦¬μ¦μμ μ ν κ³Όμ  μ΄νμ μ ν©λλ₯Ό κ΅¬νλ λ¨κ³κ° μλλ°, μ¬κΈ°μ μ΄ μμ€ ν¨μ μ€ MSEλ₯Ό μ¬μ©ν΄μ ν΄μ μ ν©λλ₯Ό νλ¨νκ³  κ΅μ°¨ λ¨κ³λ‘ λ€μ΄κ° κ²μ΄λ€.

### μ μ  λ°μ΄ν°

μκ΄κ΄κ³κ° μλ λμ©λμ λ°μ΄ν°λ₯Ό μ°Ύμλ³΄λ €κ³  λΈλ ₯νμΌλ μ°ΎκΈ°κ° μ½μ§ μμλ€. κ·Έλμ μ©λμ μμ§λ§ κ·Έλλ νμ€ν μκ΄κ΄κ³λ₯Ό λ³΄μ΄λ λ°μ΄ν°λ₯Ό κΈ°λ°μΌλ‘ λΆμμ μ§ννλ€. μ¬μ€ μ΄ λΆλΆμ μ’ μμ¬μ΄ λΆλΆμ΄κΈ΄νλ€.

μ μ ν λ°μ΄ν°λ λ°λ‘ **"κ³ λμ λ°λ₯Έ μ°μμμ μ¨λ"** μ΄λ€. 

<br>
<p align="center"><img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/graph1.jpg?raw=true" width="500" height ="300"></p>

λ°μ΄ν°κ° 20κ° μ΄ν μ λμ μκ·λͺ¨ λ°μ΄ν°λΌ λλ¬΄ ν¨ν΄μ΄ κ·Ήλ¨μ μΌλ‘ μ νμ μ΄κΈ΄ νμ§λ§, κ·Έλλ μ ν νκ· λͺ¨λΈλ‘ μ°κΈ°μλ λ¬Έμ κ° μκΈ° λλ¬Έμ μ±ννμλ€. 

κ³Όνμ μΈ μ¬μ€λ‘λ μ§νλ©΄μΌλ‘λΆν° λ©μ΄μ§μλ‘ νμ λ³΅μ¬μ΄μ΄ λ?μμ Έ μ¨λκ° κ°μνλ€λ μ¬μ€μ΄ λ°νμ Έμλ€. λ°λΌμ κ³ λκ° λμμ§μλ‘, κΈ°μ¨μ΄ λ?μμ§λ μκ΄κ΄κ³λ₯Ό κ°μ§κ³  μλ μ΄ λ°μ΄ν°λ₯Ό κ°μ§κ³ , λΆμμ ν΄λ³΄λλ‘ νκ² λ€.

## μ μ  μκ³ λ¦¬μ¦ μ€μ  κ΅¬ν νλ‘κ·Έλ¨ λΆμ
***

### **μ½λ λΆμ**

`My-Genetic-Algorithm` νλ‘κ·Έλ¨μ 6κ°μ μ¬μ©μ μ μ ν¨μμ main ν¨μλ‘ κ΅¬μ±νλ€.

μ¬μ©μ μ μ ν¨μλ λ€μκ³Ό κ°λ€.
* `gap`, νκ· ν¨μμ **ν¨μκ°**μ λ¦¬ν΄, μ¦ νλμ ν΄ *a,b*λ₯Ό κ°μ§κ³  *y=ax+b*μ λμνμ¬ yκ°μ λ¦¬ν΄νλ€. `selection`ν¨μμμ **μ ν©λ(MSE)** λ₯Ό κ³μ°νκΈ° μν¨μ΄λ€.
* `first_gen`, μ΅μ΄ ν΄ μΈλλ₯Ό λ§λ€κΈ° μν ν¨μ, μ΄ 4κ°μ§μ ν΄λ₯Ό λλ€μΌλ‘ μμ±
* `selection`, MSEλ₯Ό κ° ν΄λ§λ€ κ³μ°νλ©° μ ν©λλ₯Ό κ³μ°νλ€. νμ§λ§ μ΄ MSEλ μμμλ‘ νκ· ν¨μμ μ νλκ° λμκ²μ΄λ€. λ³΄ν΅ λ£°λ  ν  μ°μ°μ μ°¨μ§νλ λΆλΆμ΄ ν° ν΄κ° μ νλ  νλ₯ μ΄ λκ² κ΅¬ννλ€. κ·Έλ¬λ―λ‘ **κ³μ°ν MSEλ₯Ό MSEμ μ΄ν©μμ λΊ κ°**μ μλ‘μ΄ μ ν©λλ‘ μ μνκ³  λ£°λ  ν  μ°μ°μ λλ Έλ€. κ·ΈλμΌμ§λ§ MSEκ° μμ ν΄κ° λμ νλ₯ μ κ°μ§κ³  λΆλͺ¨ μΈλλ‘ μ νλκΈ° λλ¬Έμ΄λ€.
* `swap`, `crossover`ν¨μλ‘λΆν° 1-2λ²μ§Έ, 3-4λ²μ§Έ ν΄λΌλ¦¬ μ§μ μ§μ΄ μΈμλ‘ λ°λλ€. κ·Έ λ€μ `swap`ν¨μμμ aλ λ€μ 5μλ¦¬λΌλ¦¬λ₯Ό κ΅μ°¨μν€κ³ , bλ μμμ  μ μ²΄λ₯Ό κ΅μ°¨μν¨λ€. 
* `crossover`, `swap`ν¨μμ μΈμλ₯Ό μ λ¬ν¨μΌλ‘μ¨ κ΅μ°¨ μ°μ°μ μ§ννλ€.
* `mutation`, **0.005%** μ νλ₯ λ‘ bμ μ μ λΆλΆμ λμ°λ³μ΄κ° λνλκ² νμλ€.

**<u>κ° μ½λκ° μ΄λ€ κΈ°λ₯μ κ°μ§κ³  λ¬΄μ¨ μ­ν μ μννλμ§λ μμ€ μ½λμ μ£Όμμ μμΈνκ² λ¬μλμμΌλ μ°Έμ‘°λ°λλ€.</u>**

### **μ€ν κ²°κ³Ό**

<p align="center"><img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/data.jpg?raw=true" width="100" height ="250" /></p>
<p align="center">κ²°κ³Ό 1) μ¬μ© λ°μ΄ν°</p>

<p align="center"><img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/regression.jpg?raw=true" width="500" height ="300" /></p>
<p align="center">κ²°κ³Ό 2) νκ· λΆμ κ²°κ³Ό</p>

<p align="center"><img src = "https://github.com/serenhade00/My_Genetic_Algorithm/blob/main/img/result.jpg?raw=true" width="500" height ="300" /></p>
<p align="center">κ²°κ³Ό 3) νλ‘κ·Έλ¨ μ€ν κ²°κ³Ό</p>


**λ°°κ²½ μ§μ** 

* [μ ν νκ· λΆμ κ³μ°κΈ°](https://www.graphpad.com/quickcalcs/linear1/)λ₯Ό μ¬μ©νμ¬ μ μ  μκ³ λ¦¬μ¦μ ν΅ν΄ μΆμ ν λͺ¨μμ μ μ μ±μ λ°μ Έλ³΄μλ€. Best-fit-valueλ₯Ό μ΄ν΄λ³΄λ©΄ Slope(a)κ°μ -0.006525+Ξ±, yμ νΈ(b)κ°μ 15.25Β±0.3325λ‘ λμ¨λ€. κ³Όμ° μ΄ κ°μ μΌλ§λ κ·Όμ ν κ°μΌλ‘ μ κ·Όνλμ§ μ΄ν΄λ³΄μ.

* μ²«λ²μ§Έ μ€μ μλ κ²°κ³Όκ° `first_gen()`μ ν΅ν μ΄κΈ° μΈλ 4κ°μ ν΄μ΄λ€. νκ· λΆμμ΄ μ§μ­ μ΅μ μ μ λΉ μ§μ§ μκ² νκΈ° μν΄ μ΄κΈ°μ νΉμ  λ²μλ₯Ό μ§μ ν΄μ£Όμλ€. κΈ°μΈκΈ°μΈ *a*λ κ³ λ -24-15/6000-0 = 0.0067...μ΄ λμ€κΈ°μ 0~-0.01μ μ¬μ΄μ κ°μ κ°λλ‘ νκ³ , y μ νΈμΈ *b*λ 10μμ 20μ¬μ΄μ κ°μ κ°μ§λλ‘ νλ€. μ΄μ°¨νΌ μ ν©λλ₯Ό μ κ³±μ ννμΈ MSEλ₯Ό κ°μ§κ³  νκΈ° λλ¬Έμ μ΄ μ λ λ²μλ§ μ£Όμ΄λ μΆ©λΆν κ²°κ³Όκ° μλ€κ°λ€ ν  κ²μ΄λ€. 

**κ²°κ³Όλ₯Ό λΆμν΄λ³΄μ.** 

* μμλλ‘ 5μΈλλ₯Ό κ±°μΉλ©° κ°κ° μ ν, κ΅μ°¨, λ³μ΄ μ°μ°μ κ±°μΉ κ²°κ³ΌμΈλ°, μ΄κΈ° μΈλμμ κ°μ₯ ν΄μ κ°κΉμ΄ κ²μ 1,2λ²μ§Έμ ν΄μ΄λ€. aμ bκ°μ΄ κ±°μ νκ· λΆμμ ν΅ν κ°κ³Ό κ°κΉκΈ° λλ¬Έμ΄λ€. 
* 1μΈλ μ ν κ³Όμ μμλΆν° μ΄λ―Έ κ°μ₯ μ΅μ ν΄μ κ±°λ¦¬κ° λ¨Ό 4λ²μ§Έ ν΄λ μ νλμ§ λͺ»νλ€. λ£°λ  ν  μ°μ°μ μν΄ μλ§ λ?μ νλ₯ μ κ°μ‘κΈ°μ νλ½λμμ κ²μ΄λ€. 
* κ·Έ ν 4μΈλ μ ν κ³Όμ μ λ³΄λ©΄ μ΄κΈ° μΈλμμ 3λ²μ§Έλ‘ ν΄μ κ°κΉμ λ ν΄κ° νλ½νλ€. κ·Έ μ΄νλ‘λ λμΌν ν΄λΌλ¦¬ κ΅μ°¨ μ°μ°κ³Ό μ ν κ³Όμ μ΄ μΌμ΄λλ©° ν΄μ κ°μ₯ κ°κΉμ΄ μΈλλ§μ΄ μ΄μλ¨μλ€. 
* κ²°κ΅­, μΈλλ₯Ό κ±°μ³κ°λ©° μ ν©λκ° λμ(MSE λ?μ) ν΄κ° λ λ§μ΄ μ νλμκ³  κ·Έ μ°μν ν΄λ€λΌλ¦¬ κ΅μ°¨, λ³μ΄ μ°μ°μ κ±°μΉλ©° μ μ  λ μ’μ ν΄λ‘ λ°μ ν  μ¬μ§κ° λμλ€. λν κ·Έλ° ν΄λ€λΌλ¦¬ μμμ λ§λ€μ΄ λ μ’μ μ ν©λλ₯Ό κ°μ§ν΄κ° λμ€λ©΄ λ€μ μ ν κ³Όμ μμ κ·Έ ν΄κ° μ΄μ  λΆλͺ¨κ° λλκ²μ΄λ€. μ΄λ° κ²½ν₯μ ν΅ν΄ μ’μ ν΄κ° μ νλμλ€. 
* μ μμ μΌλ‘ μ ν, κ΅μ°¨ μ°μ°μ΄ μΌμ΄λκ³ , λ³μ΄ μ°μ°μ λ?μ νλ₯  λλ¬Έμ μ΄ μμ μμλ νμΈλμ§ μμλ€. λ³μ΄ μ°μ°μ νλ₯ μ΄ λλ€λ©΄, μ΅μ ν΄μ μ μ κ·Όνκ³  μλ ν΄κ° κ°μκΈ° μλ±ν ν΄κ° λλ²λ¦¬λ μΌμ΄ μκΈΈμλ μκΈ°μ νλ₯ μ μ‘°μ νλ€. 

### **μ±λ₯ λΆμ**

* μκ°λ³΅μ‘λ
    * `first_gen`, μ λ¨μν ν΄μ κ°μλ§νΌ λλ€μΌλ‘ ν λΉνλ―λ‘ O(n)
    * `selection`, MSEλ₯Ό κ° ν΄λ§λ€ κ³μ°νλ©° μ ν©λλ₯Ό κ³μ°νλ€. κ° ν΄λ§λ€ MSEλ₯Ό κ³μ°νλ―λ‘ μ΄μ€ λ£¨νλ‘€ λλ€. λ°λΌμ O(n^2).
    * `swap,crossover`λ λκ°μ© μ§ μ§μ΄μ λ¨μν μλ¦¬ κ΅νλ§ νλ―λ‘ O(n) 
    * `mutation` μ­μ λ£¨νλ₯Ό νλ²λ§ λλ©° νλ₯ μ λ«μΌλ©΄ λ³μ΄κ° λνλλ―λ‘ O(n).

* κΈ°ν μ°Έκ³ ν  μ 
    * μλ λ³΄ν΅μ μ μ  μκ³ λ¦¬μ¦ κ΅¬νλ³΄λ€ λ μ€ν μκ°μ΄ λ€ κ²μ΄λ€. μλνλ©΄ λ¬Όλ‘  λ¬Έμ λ§λ€ μν©μ΄ λ€λ₯΄κ² μ§λ§ μ ν κ³Όμ μμ λ£°λ  ν μ MSEλ₯Ό μ΄μ©νμ¬ νλ₯ μ ν λΉν  λ λ?μ μμλλ‘ λμ μ°μ μμλ₯Ό κ°μ ΈμΌ νμΌλ―λ‘ μ΄ν©-MSEκ°μ μλ‘ κ³μ°ν΄μ ν λΉνκΈ° λλ¬Έμ΄λ€.
    * λν, κ΅μ°¨ μ°μ°μμλ λ³΄ν΅ ν΄λ₯Ό 2μ§μλ‘ νννμ¬ λΉνΈλΌλ¦¬ κ΅ννλ κ³Όμ μ κ±°μΉλλ°, μ΄ νλ‘κ·Έλ¨μ κ·Έλ₯ 10μ§μλ‘ ννλ μμ λΆλΆμ νΉμ  λΆλΆμ κ΅ννλ μμΌλ‘ κ΅¬ννλ€. μ΄κ±΄ μλ§ 2μ§μλ‘ λ³ννκ³  λΉνΈλ₯Ό μ²΄μΈμ§νκ³  λ€μ 2μ§μλ‘ λ³ννλ μλ λ°©λ²λ³΄λ€λ λΉ λ₯Ό μ μλ€.
    * λ³μ΄ μ°μ°μ μ μ΄μ μΌμ΄λ  νλ₯ μ΄ μ μλ° ν¨μλ ν­μ μ€νλλ―λ‘ μλ¬΄λλ λΆνμν μ°μ°μ΄ μμλκΈ°λ νλ€.

## νκ³ λ° κ°μ μ 
***

- μ΄ νλ‘κ·Έλ¨μ λ€μ μ μ μΈλ©΄μ΄ μ‘΄μ¬νλ€. μ΄λ―Έ μκ³ λ¦¬μ¦μ μ€νν  λ μ΄λμ λμ λ²μλ₯Ό κ°μ νκ³  μμνκΈ° λλ¬Έμ΄λ€. μ λ§ λΉκ΅μ  λΆμμ΄ μ¬μ΄ **μ ν νκ· λΆμ**μμλ§ ν΅νλ λ°©λ²μΌμλ μλ€.

- κ΅μ°¨ μ°μ°μμ μμλ‘ *a*λ λ€μ 5μλ¦¬, *b*λ μμμ  μ μ²΄λ₯Ό λ°κΎΈλλ‘ μ€μ νκ³ , λν 1-2 / 3-4 λΌλ¦¬λ§ λ°κΎΈλλ‘ μ€μ μ ν΄λ¨λ€. λ¬Όλ‘  μΈλλ₯Ό κ±°μΉ μλ‘ μ‘°κΈμ©μ΄λΌλ μ΅μ ν΄μ λ€κ°κ°κ² μ§λ§ κ³Όμ° μΌλ§λ λΉ λ₯΄κ² μ§νμμΌμ€μ§ μνμ μΈ μκ΅¬μ¬μ΄ λ λ€.

- λν ν΄μ κ°μμ λ°μ΄ν°μ κ°μλ₯Ό λλ¬΄ μ κ² μ‘μ κ² κ°μ λλ¬΄ μμ½λ€. μ΄λ―Έ κ±°μ μ νμ μΈ λͺ¨μ΅μ΄ λ³΄μΌμ λλ‘ λλ¬΄λλ μ§κ΄μ μΈ λ°μ΄ν°μ΄κ³ , ν΄μ κ°μκ° μ λ€λ³΄λ κ°μ ν΄κ° μ νλλ©΄ κ·Έ ν΄λΌλ¦¬ κ΅μ°¨ μ°μ°μ ν΄λ΄€μ μλ¬΄ μλ―Έκ° μμ΄μ§λ μ¬νκ° λ°μνλ€. 

## κ²°λ‘ 
***

- **μ μ  μκ³ λ¦¬μ¦**μ μ΄λ‘ μ μΌλ‘ μ μ­ μ΅μ μ μ μ°Ύμ μ μμΌλ©°, μνμ μΌλ‘ λͺννκ² μ μλμ§ μμ λ¬Έμ μλ μ μ©ν  μ μκΈ° λλ¬Έμ λ§€μ° μ μ©νκ² μ΄μ©λλ€. μΌλ°μ μΌλ‘ μ μ  μκ³ λ¦¬μ¦μ λν΄ μκ³ λ¦¬μ¦μ΄λΌλ ννμ μ°κΈ΄ νλ, μ΄λ νΉμ ν λ¬Έμ λ₯Ό νκΈ° μν μκ³ λ¦¬μ¦μ΄λΌκΈ° λ³΄λ€λ μ΅μ ν λ¬Έμ λ₯Ό νκΈ° μν λ°©λ²λ‘ μ κ°κΉλ€. 

- μ¦, λͺ¨λ  λ¬Έμ μ μ μ© κ°λ₯ν νλμ μκ³ λ¦¬μ¦μ΄λ μμ€ μ½λκ° μλ κ²μ΄ μλκΈ° λλ¬Έμ μ μ  μκ³ λ¦¬μ¦μ μλ¦¬λ₯Ό μ΄ν΄νκ³ , μ΄λ₯Ό λ³ΈμΈμ΄ μνλ λ¬Έμ μ μ μ©νλ κ²μ΄ μ€μνλ€.

- μ΄ μκ³ λ¦¬μ¦μ λ°°μ°λ©΄μ λλμ μ, **'λ°μ΄ν°λ₯Ό λ€μ μΈλμ μ μ μν€λκ²'** λ§ κ°μ§ λ¬Έμ λ§λ€ κ΅¬ν λ°©λ²μ μ²μ°¨λ§λ³μμ μ μ μμλ€. μ ν λ°©λ²μ λ­λ‘ νλμ§, κ΅μ°¨λ₯Ό μ΄λ»κ² νλμ§, μ ν©λλ₯Ό μ΄λ»κ² κ³μ°νλμ§ λ±μ λ°λΌ μ λ§μ κ²½μ°μ μκ° λμ¨λ€λκ±Έ κΉ¨λ¬μλ€. 

- μ΄ νλ‘κ·Έλ¨μ΄ μλ²½ν νλ‘κ·Έλ¨μ μ λ μλμ§λ§, κ·Έλλ μ£Όμ μ°μ°μ μ§μ  κ΅¬νν΄λ³΄λ©΄μ κ°κΉμ΄ ν΄λ₯Ό μ°Ύμλκ°λ λ°©μμ μ λμνκΈ°μ λ§μ‘±μ€λ½λ€.

<p align="center">Copyrightβ. 2022. By Seonghwan Shin. </p>
<p align="center">All Rights Reserved.</p>
<p align="center">-The End-</p>