# Отчет по лабораторной работе № 1
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Явметдинов Максим Русланович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Git, Github, Gitlab
2. **Цель работы**: Изучить основы Git
3. **Задание**: 
- завести репозиторий (**общий под все лабораторные работы с отдельной папкой под каждую лр!**)
- отчет с листингом в Markdown (листинг - ctrl+c -> ctrl+v из терминала с форматированием в markdown)
- создать отдельную ветку в репозитории под задание
- создать коммит с листингом и отчетом
- смержить ветку в мейн
4. **Идея, метод, алгоритм решения задачи**: 
- git init 
- редактировать Report-template.md 
- git add \*
- git commit
- git checkout -b lab1
- git push origin lab1
- зайти на github.com
- создать pull request
- смержить в main
5. **Сценарий выполнения работы**: выполнить команды, проверить результат
6. **Протокол**: 
```
C:\Users\admin\Desktop\inf-labs>git init
Initialized empty Git repository in C:/Users/admin/Desktop/inf-labs/.git/

C:\Users\admin\Desktop\inf-labs>git remote add origin https://Shruc7:<токен>@github.com/Shruc7/labs-inf-1k.git

C:\Users\admin\Desktop\inf-labs>git add *
warning: in the working copy of 'lab1/report.md', LF will be replaced by CRLF the next time Git touches it

C:\Users\admin\Desktop\inf-labs>git commit -m "init"
[master (root-commit) 95db2c6] init
 1 file changed, 33 insertions(+)
 create mode 100644 lab1/report.md

C:\Users\admin\Desktop\inf-labs>git push origin master
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 6 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (4/4), 1.10 KiB | 1.10 MiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/Shruc7/labs-inf-1k.git
 * [new branch]      master -> master

C:\Users\admin\Desktop\inf-labs>git checkout -b lab1
Switched to a new branch 'lab1'

C:\Users\admin\Desktop\inf-labs>git add *
```
7. **Выводы**: Эта работа мне понравилась тем, что я смог попробовать команды Git в терминале. Эти знания мне пригодятся при создании проектов. Было интересно попробовать Git в CLI. Итог: Я научился использовать базовые команды Git и Bash, редактировать файлы Markdown.
