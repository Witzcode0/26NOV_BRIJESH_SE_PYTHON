"""
In Python, a dictionary is a data structure that stores key-value pairs. It is similar to a real-world dictionary where you can look up a word (key) and find its corresponding definition (value). Dictionaries are unordered collections of items, meaning that the order in which the items are stored does not necessarily correspond to the order in which they were added.

Dictionaries are defined using curly braces {}, and each key-value pair is separated by a colon :. Here's asyntax:

dict_name = {
    'key1':'value1',
    'key2':'value2',
}

dict_name = dict()
"""
# contacts = dict()
# print(type(contacts))

contacts = {
    'A':[
        {
            'aman':{
                'email':['aman@gmail.com', 'aman07@gmail.com'],
                'mobile':123456234
            },
            'ajay':{
                'email':"ajay@gmail.com",
                'mobile':['47687463764', '7128638723']
            }
        }
    ],
    'B':[
        {
            'bubban':{
                'email':"",
                'mobile':3287645587
            },
            'bunty':{
                'email':"bunty@gmail.com"
            }
        }
    ]
}

# print(contacts)
# print(contacts['A'])
# print(contacts['B'])

# print(contacts['A'][0]['aman'])
# print(contacts['A'][0]['aman']['email'][1])
# print(contacts['A'][0]['aman']['mobile'])

# 'clear', 'copy', 'fromkeys', 'get', 'items', 'keys', 'pop', 'popitem', 'setdefault', 'update', 'values'

# print(dir(contacts))

# items = ['tomato', 'onion', 'potato']
# price = 20

# products = dict()
# products_ = products.fromkeys(items, price)
# products_['onion'] = 40
# products_['potato'] = 60
# print(products_.get('potato'))

# book = {
#     'author':"brijesh gondaliya",
#     'name':"Python for everybody",
#     # 'price':70
# }

# book.update({'page':300, 'color':"yellow with blue"})

# book.setdefault('page', 555)
# book.setdefault('price', 300)


# print(book)

# book.pop('name')
# book.popitem()
# print(book)

# print(book.keys())
# print(book.values())
# print(book.items())

# for key in book.keys():
#     print(key)

# for value in book.values():
#     print(value)

# for value in book.items():
#     print(value[0], value[1])

# for key, value in book.items():
#     print(key, value)