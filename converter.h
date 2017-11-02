float cm_to_in(void)
{
    //TUCKER BARTHOLOMEW
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float ft_to_cm(void)
//Ryan Jarogoske
{
    float ft = get_float("number of feet:");
    float cm = ft / 30.48;
    printf("\nThe number of centimeters is %.2f", cm);
    return cm;
}
