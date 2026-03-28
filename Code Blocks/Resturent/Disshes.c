#include<stdio.h>
#include<conio.h>

main()
{
    char ch;
    int x,y;

    while(ch=1000)
    {
       printf("Enter 'i' for Indian Dishes.\nEnter 'c' for Chinese Dishes\n");
    printf("what you choose:- ");
    scanf("%s",&ch);
    if(ch == 'i')
  {
    printf("Indian dishes-\n");
    indian();
    while(x=10)
{
    printf("\nwhat you choose dishe:-");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
        printf("Butter Chicken.\n");
        printf("price:- Rs.310 only.\n\n\nDescription:-\n");
        printf("Butter chicken, traditionally known as murgh makhani, is a dish originating from the Indian subcontinent.Its sauce is known for");
        printf("\nIt is a type of curry made from chicken with a spiced tomato and butter (makhan) sauce.");
        printf("\nits rich texture. It is similar to chicken tikka masala, which uses a tomato paste.");
        break;
    case 2:
        printf("Dal Makhani.\n");
        printf("price:- Rs.150 only.\n\n\nDescription:-\n");
        printf("Popular North Indian vegetarian dish, dal makhani is a creamy preparation made with black lentils (urad dal) and served with");
        printf("\nroti. The gravy is made with cream and tomato puree, and spiced with cumin, cardamom, cloves, cinnamon, bay leaves, ginger,");
        printf("\ngarlic, red chili powder and sometimes dry fenugreek leaves (kasuri methi). A hot piece of charcoal is sometimes dropped into");
        printf("\nthe final mixture to infuse a smoky flavor into the gravy.");
        break;
    case 3:
        printf("Malai Kofta.\n");
        printf("price:- Rs.150 only for one.\n\n\nDescription:-\n");
        printf("You’ve heard of meatballs. Now prepare to meet kofta! In North Indian cuisine, kofta refers to deep fried balls made");
        printf("\nfrom vegetables or meat. This dish is made by rolling balls of potato and paneer with cashews, raisins, cornstarch and");
        printf("\nspices and frying them. Then, the balls are dunked in a velvety gravy made of tomatoes, onions, garlic, ginger and");
        printf("\ngreen chili, which is cooked with bay leaves, cinnamon, green cardamom, cloves and caraway seeds, with heavy cream added at the end.");
    case 4:
        printf("Pakora.\n");
        printf("price:- Rs.20 only for per pieces.\n\n\nDescription:-\n");
        printf("Pakora is a spiced fritter originating from the Indian subcontinent. They are sold by street");
        printf("/nvendors and served in restaurants in South Asia and UK. It consists of items, often");
        printf("nvegetables such as potatoes and onions, coated in seasoned gram flour batter and deep fried.");
        break;
    case 5:
        printf("Korma.\n");
        printf("price:- Rs.100 only for one.\n\n\nDescription:-\n");
        printf("Korma or qorma is a dish originating in South Asia, consisting of meat or vegetables braised");
        printf("\nwith yogurt (dahi), water or stock, and spices to produce a thick sauce or gravy.");
        break;
    case 6:
        printf("Biryani.\n");
        printf("price:- Rs.130 only for full & Rs.70 only for half.\n\n\nDescription:-\n");
        printf("Biryani is a mixed rice dish originating among the Muslims of the Indian subcontinent. It is");
        printf("\nmade with Indian spices, rice, and usually some type of meat (chicken, beef, goat, lamb, prawn,");
        printf("\nfish) or in some cases without any meat, and sometimes, in addition, eggs and potatoes.");
        break;
    default:
        printf("Unmatched");
    }
}
  }
  else if(ch == 'c')
{
  printf("Chinese dishes-\n");
  chinese();
  printf("\nwhat you choose dishe:-");
  scanf("%d",&y);
  switch(y)
  {
  case 1:
    printf("Chillichicken.\n");
    printf("price:- Rs.15 for per pieces & Rs.50 for full.\n\n\nDescription:-\n");
    printf("Chilli chicken is probably most common Chinese dish readily available in all parts of the nation. In fact, it is");
    printf("\nso famous, that most roadside street food stalls even sell Chilli Chicken. It is prepared with a Soy Sauce Marinade");
    printf("nforthe chicken. The Chicken marinade is cooked with Garlic, Ginger, and spices and stir-fried with Onions and Green Chillies.");
    break;
  case 2:
    printf("Chicken Manchurian.\n");
    printf("price:- Rs.200 for one.\n\n\nDescription:-\n");
    printf("Chicken Manchurian was supposedly created by the chef of China Garden in Mumbai in the year 1975, as he experimented ");
    printf("\nwith a variety of ingredients like Garlic, Chilli, and Ginger. The occasional use of Garam masala was replaced with soy");
    printf("\nSauce. This mixture later became so famous that it even was attempted with Gobi, Mutton and Paneer.");
    break;
  case 3:
    printf("Chowmein.\n");
    printf("price:- Rs.40\n\n\nDescription:-\n");
    printf("Chowmein is a common dish in China as well as India. Over there, it is only boiled and served with");
    printf("\nSoy Sauce, Scrambled Eggs over the top resting on a layer of green vegetables. But in the Indian variant,");
    printf("\nit is prepared by stir-frying the boiled Noodles with Soy Sauce, Vinegar, and sometimes even MSG.");
    break;
  case 4:
    printf("Manchow Soup.\n");
    printf("price:- Rs.300\n\n\nDescription:-\n");
    printf("Manchow Soup is a delicious soup which is a part of the Indo-Chinese culinary scene. It is a spicy Soy Sauce based soup, which ");
    printf("\nhas strong flavours of Ginger, Garlic and Vegetables. When the soup is done, it is finished off with crispy Noodles on the top.");
    break;
  case 5:
    printf("Chicken Lollipop.\n");
    printf("price:- Rs.200 for 4 pieces\n\n\nDescription:-\n");
    printf("This is a famous appetiser where Lollipops of Chicken are fried in a batter and dipped in a sweet and spicy sauce.");
    break;
  case 6:
    printf("Chicken Momo.\n");
    printf("price:- Rs.120 only for full & Rs.60 for half.\n\n\nDescription:-\n");
    printf("Momo are bite-size dumplings made with a spoonful of stuffing wrapped in dough. Momo are usually");
    printf("\nsteamed, though they are sometimes fried or steam-fried. Meat fillings becomes succulent as it");
    printf("\nproduces an intensively flavored sealed inside the wrappers. Momo is an important dish for Tibetans,");
    printf("\nboth for everyday and festivals. Variants of the dish developed later in Nepal after it");
    printf("\nbecame popular among Asians.");
  }
}
else
{
  printf("unmatched");
}
    }

getch();
}

indian()
{
  printf("1.Butter chicken.\n");
  printf("2.Dal Makhani.\n");
  printf("3.Malai Kofta.\n");
  printf("4.Pakora.\n");
  printf("5.Korma.\n");
  printf("6.Biryani.\n");
}
chinese()
{
  printf("1.Chillichicken.\n");
  printf("2.Chicken Manchurian.\n");
  printf("3.Chowmein.\n");
  printf("4.Manchow Soup.\n");
  printf("5.Chicken Lollipop.\n");
  printf("6.Chicken Momo.\n");
}
