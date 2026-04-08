from django.db import models

class Task(models):
    description = models.CharField(max_length=200)
    Duedate = models.DateTimeField(auto_now=False, null=False)
    priority = models.PositiveSmallIntegerField(null=True)

class ToDoList(models):
    task = models.ForeignKey(Task, on_delete=models.CASCADE)
class 