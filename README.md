# 🚀 Calculadora de Integrais!
Bem-vindo ao repositório do trabalho prático Calculadora de Integrais, com o fim de calcular integrais definidas.

---

## 📝 Descrição:
Este programa implementa, em C + +, um método numérico simples para aproximar integrais definidas utilizando a Soma de Riemann.

A ideia central é dividir o intervalo [a,b] em várias partes (retângulos) á partir do ponto médio, calcular a área de cada um e somar essas áreas para obter uma aproximação da integral. Vale lembrar que o “n” utilizado no código significa a quantidade de divisões feitas em retângulos - ou seja, quanto maior o “n”, maior a precisão do cálculo.

O código foi feito sem o uso de funções externas personalizadas, apenas com o fluxo principal dentro da main, com o fito de facilitar o entendimento.

---

## 📦 Como Utilizar?

### 1. Digite os valores solicitados como input:

a: limite inferior do intervalo

b: limite superior do intervalo

n: número de divisões (quanto maior, mais precisa a aproximação)

### 2. Inclua a função diretamente no código:

Utilize um compilador C++, como o GDB, e compile o código com a função na linha 22, somando.

---

# Explicação do Código:

### 1. Entrada do Usuário:

O usuário fornece os limites do intervalo e o número de divisões.

```cpp
cin >> a;
cin >> b;
cin >> n;
```

### 2. Cálculo da largura de cada subintervalo:

Cada subintervalo terá tamanho igual a (b - a)/n

```cpp
double base = (b - a) / n;
```

### 3. Soma de Riemann pelo ponto médio:

"soma" acumula os valores da função f(p) multiplicados pelo comprimento do subintervalo posteriormente, onde p é o ponto médio.

```cpp
for (int i = 0; i < n; i++){
    double p = a + (i + 0.5) * base;
    soma = soma + (p * p + 2 * p + 4);
}
```

### 4. Cálculo da área aproximada e exibição do resultado:

Multiplica a soma dos valores da função pela largura dos subintervalos.

```cpp
double calculo_area = soma * base;
cout << calculo_area;
```

---

Codado e desenvolvido por Vítor Policarpo!!
