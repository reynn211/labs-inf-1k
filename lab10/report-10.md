# Отчет по лабораторной работе № 10
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Явметдинов Максим Русланович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Создание документа с использованием языка разметки LaTeX для набора научных статей.
2. **Цель работы**: Овладение основами языка LaTeX для создания профессионально оформленных научных документов, включая статьи, отчеты и презентации.
3. **Идея, метод, алгоритм решения задачи**:
- Создание нового документа.
- Набор текста с использованием различных стилей форматирования, таких как заголовки, списки, таблицы и математические формулы.
- Сравнить исходный и полученный документы.
4. **Сценарий выполнения работы**:
- Установить MiKTeX.
- Создать новый .tex файл.
- Набрать текст с использованием различных команд форматирования.
- Скомпилировать документ с помощью LaTeX-компилятора pdflatex.
5. **Протокол**:
```tex
\documentclass[12pt]{extbook}
\usepackage[utf8]{inputenc}
\usepackage[russian]{babel}
\usepackage{amsfonts}
\usepackage{amssymb}
\usepackage[version=4]{mhchem}
\usepackage{fancyhdr}
\usepackage{setspace}
\usepackage[margin=31mm,paperheight=235mm,paperwidth=173mm]{geometry}

\setcounter{page}{507}
\pagestyle{fancy}
\fancyhf{}
% line page num
\renewcommand{\headrulewidth}{0pt}
\renewcommand{\footrulewidth}{0pt}
% \fancyfoot[C]{\rule{1in}{0.4pt} \\ \textit{\thepage}}
\setlength{\spaceskip}{2pt}
\renewcommand{\baselinestretch}{0.5} 

\begin{document}
% \the\paperheight
% \the\pdfpageheight 
% \the\paperwidth
% \the\pdfpagewidth

\noindent Для получившейся правильной рациональной дроби уже \\\mbox{найдено} ее разложение на элементарные дроби (см. формулу (19.33)):

\small
\begin{equation}
\frac{x^{2}-1}{x\left(x^{2}+1\right)^{2}}=-\frac{1}{x}+\frac{2 x}{\left(x^{2}+1\right)^{2}}+\frac{x}{x^{2}+1} \notag
\end{equation}

\noindentпоэтому

\begin{gather}
\smallint \frac{x^{6}+2 x^{4}+2 x^{2}-1}{x\left(x^{2}+1\right)^{2}} d x=\smallint x d x-\smallint \frac{d x}{x}+\smallint \frac{2 x d x}{\left(x^{2}+1\right)^{2}}+\smallint \frac{x}{x^{2}+1} d x= \notag \\ \notag \\
=\frac{x^{2}}{2}-\ln |x|+\smallint \frac{d\left(x^{2}+1\right)}{\left(x^{2}+1\right)^{2}}+\frac{1}{2} \smallint \frac{d\left(x^{2}+1\right)}{x^{2}+1}= \notag \\ \notag \\
=\frac{x^{2}}{2}-\ln |x|-\frac{1}{x^{2}+1}+\frac{1}{2} \ln \left(x^{2}+1\right)+C . \notag
\end{gather}
\setlength{\spaceskip}{10pt}
\setstretch{0.9}

Следует иметь в виду, что указанный метод вычисления неопределенного интеграла от рациональной дроби является общим: с помощью его можно вычислить неопределенный интеграл от любой рациональной дроби, если можно получить конкретное разложение знаменателя на множители вида (19.10). Однако естественно, что в отдельных частных случаях бывает целесообразнее для значительного сокращения вычислений действовать иными путями.

\setlength{\spaceskip}{2mm}
Например, для вычисления интеграла $I=\smallint \frac{x^{2} d x}{\left(1-x^{2}\right)^{3}}$ проще не раскладывать подынтегральную функцию на элементарные дроби, а применить правило интегрирования по частям. Положив $u=x, d v=\frac{x d x}{\left(1-x^{2}\right)^{3}}$ и, следовательно, $d u=d x$, \\$ v=\frac{1}{4\left(1-x^{2}\right)^{2}} $, получим

\begin{align}
& \quad I=-\frac{1}{2} \smallint x \frac{d\left(1-x^{2}\right)}{\left(1-x^{2}\right)^{3}}=\frac{x}{4\left(1-x^{2}\right)^{2}}-\frac{1}{4} \smallint \frac{1}{\left(1-x^{2}\right)^{2}} d x . \notag
\end{align}

\begin{center}
\rule{1in}{0.4pt} \\ \textit{\thepage}
\end{center}

\end{document}
```
6. **Выводы**:  Эта работа была важной для овладения основами языка LaTeX, который является стандартом для научных и технических публикаций. LaTeX обеспечивает высококачественное форматирование и удобное создание математических формул. Эти навыки могут быть полезны в научной и академической деятельности.
7. **Итог**: Я приобрел базовые навыки работы с языком LaTeX, что позволит мне эффективно создавать и оформлять научные документы. 
