from django.shortcuts import render
from third.models import Restaurant
from django.core.paginator import Paginator





def list(request):
    restaurant = Restaurant.objects.all()
    paginator = Paginator(restaurant, 5)

    page = request.GET.get('page')
    items = paginator.get_page(page)
    context = {
        'restaurant': items
    }
    return render(request, 'third/list.html', context)
