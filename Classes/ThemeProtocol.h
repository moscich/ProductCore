//
// Created by Marek Mościchowski on 20/02/14.
//


#import <Foundation/Foundation.h>

typedef enum
{
    LabelThemeNormalLabel,
    LabelThemeMentalLabel
} LabelThemeType;

@protocol ThemeProtocol <NSObject>

- (void)colorLabel:(UILabel *)label withType:(LabelThemeType)type;

@end