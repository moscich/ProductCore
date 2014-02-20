//
// Created by Marek Mościchowski on 20/02/14.
//


#import <Foundation/Foundation.h>

typedef enum
{
    NormalLabel,
    MentalLabel
} LabelThemeType;

@protocol ThemeProtocol <NSObject>

- (void)colorLabel:(UILabel *)label withType:(LabelThemeType)type;

@end