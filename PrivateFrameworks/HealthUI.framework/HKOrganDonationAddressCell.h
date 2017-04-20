/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationAddressCell : UITableViewCell <HKSimpleDataEntryCellType, UITextFieldDelegate> {
    UIView * _addressContainerView;
    UIView * _addressSeparator;
    UIView * _citySeparator;
    UITextField * _cityTextField;
    <HKSimpleDataEntryCellDelegate> * _delegate;
    BOOL  _editDisabled;
    UIView * _horizontalSeparator;
    UIView * _stateSeparator;
    UIButton * _stateShadowButton;
    UITextField * _stateTextField;
    UIView * _stateZipSeparator;
    UITextField * _streetOneTextField;
    UITextField * _streetTwoTextField;
    UILabel * _titleLabel;
    UIView * _verticalSeparator;
    UITextField * _zipCodeTextField;
}

@property (nonatomic, retain) UITextField *cityTextField;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSimpleDataEntryCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editDisabled;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UITextField *stateTextField;
@property (nonatomic, retain) UITextField *streetOneTextField;
@property (nonatomic, retain) UITextField *streetTwoTextField;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *zipCodeTextField;

- (void).cxx_destruct;
- (void)_setupFonts;
- (void)_setupLayoutConstraints;
- (void)_stateShadowButtonTapped:(id)arg1;
- (id)cityTextField;
- (id)delegate;
- (BOOL)editDisabled;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setCityTextField:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditDisabled:(BOOL)arg1;
- (void)setStateTextField:(id)arg1;
- (void)setStreetOneTextField:(id)arg1;
- (void)setStreetTwoTextField:(id)arg1;
- (void)setZipCodeTextField:(id)arg1;
- (id)stateTextField;
- (id)streetOneTextField;
- (id)streetTwoTextField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)toggleMissingState:(BOOL)arg1 forKey:(id)arg2;
- (id)zipCodeTextField;

@end