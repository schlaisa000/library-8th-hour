float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float km_to_in(void)
{
    // Created by: Isaiah Schlagel
    float km = get_float( "Kilometers: ");
    float in = km * 39370.1;
    printf( "\nThe number of inches is %.2f\n", in );
    return in;
}
float km_to_feet(void)
{
    // Created by: Isaiah Schlagel
    float km = get_float( "Kilometers: " );
    float feet = km * 3280.841666667;
    printf( "\nThe number of feet is %.2f\n", feet );
    return feet;
}
