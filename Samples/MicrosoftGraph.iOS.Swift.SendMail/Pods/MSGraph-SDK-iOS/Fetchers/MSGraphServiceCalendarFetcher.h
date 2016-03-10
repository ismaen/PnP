/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICECALENDARFETCHER_H
#define MSGRAPHSERVICECALENDARFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceEventCollectionFetcher;
@class MSGraphServiceEventCollectionFetcher;
@class MSGraphServiceEventFetcher;
@class MSGraphServiceCalendarOperations;


/** MSGraphServiceCalendarFetcher
 *
 */
@interface MSGraphServiceCalendarFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceCalendarOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceCalendar *, MSOrcError *))callback;
- (void)update:(MSGraphServiceCalendar *)calendar callback:(void (^)(MSGraphServiceCalendar *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceCalendarFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceCalendarFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceCalendarFetcher *)select:(NSString *)params;
- (MSGraphServiceCalendarFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=events) MSGraphServiceEventCollectionFetcher *events;

- (MSGraphServiceEventFetcher *)eventsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=calendarView) MSGraphServiceEventCollectionFetcher *calendarView;

- (MSGraphServiceEventFetcher *)calendarViewById:(id)identifier;


@end

#endif
